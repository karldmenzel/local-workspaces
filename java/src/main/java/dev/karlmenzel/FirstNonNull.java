package dev.karlmenzel;

import dev.karlmenzel.Pojo;

public class FirstNonNull {

	// This is the solution to the follow StackOverflow question:
	// https://stackoverflow.com/questions/78301031/cannot-resolve-symbol-moreobjects/78313706#78313706

	public static Pojo firstNonNull(Pojo p1, Pojo p2) {
		if(p1 != null)
			return p1;
		else if(p2 != null)
			return p2;
		else
			throw new NullPointerException("Both objects are null.");
	}
}