const getHello = require('./utils/utils');

function main() {    
    const value = getHello();
    
    console.log(value)
    
    console.log("Exiting main function.")
}

main()

module.exports = main;