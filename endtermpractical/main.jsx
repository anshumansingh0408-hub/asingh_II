function calculateFactorial() {
    const num = parseInt(document.getElementById('num').value);
    const resultDiv = document.getElementById('result');
    
    if (isNaN(num) || num < 0) {
        resultDiv.innerHTML = 'Please enter a non-negative number';
        return;
    }
    
    function factorial(n) {
        if (n === 0 || n === 1) {
            return 1;
        }
        return n * factorial(n - 1);
    }
    
    const fact = factorial(num);
    resultDiv.innerHTML = `Factorial of ${num} = ${fact}`;
}

document.getElementById('num').addEventListener('keypress', function(e) {
    if (e.key === 'Enter') {
        calculateFactorial();
    }
});
