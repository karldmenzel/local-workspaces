package dev.karlmenzel;

import dev.karlmenzel.Pojo;

import static dev.karlmenzel.FirstNonNull.firstNonNull;

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class FirstNonNullTest {

    @Test
    public void optionOne_firstNonNull() {         
        Pojo a = new Pojo("a");
		Pojo b = new Pojo("b");
		
		Pojo result = firstNonNull(a, b);
		
		assertEquals(a, result);
		assertEquals("a", result.getValue());
    }
    
    @Test
    public void optionTwo_firstNonNull() {         
        Pojo a = new Pojo("a");
		Pojo c = null;
		
		Pojo result = firstNonNull(c, a);
		
		assertEquals(a, result);
		assertEquals("a", result.getValue());
    }
    
    @Test
    public void bothNull_firstNonNull() {         
		Pojo c = null;
		
		assertThrows(NullPointerException.class, () -> {
			firstNonNull(c, c);
		});
    }
}