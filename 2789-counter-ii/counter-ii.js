var createCounter = function(init) {
  let counter = init;
  
  return {
    increment: ()=> {
      return counter += 1;
    },
    decrement: ()=> {
      return counter -= 1;
    },
    reset: ()=> {
      counter = init;
      return counter;
    }
  };
};

const counter = createCounter(5);
console.log(counter.increment()); // Output: 6
console.log(counter.reset()); // Output: 5
console.log(counter.decrement()); // Output: 4
