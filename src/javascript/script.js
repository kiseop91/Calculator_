class Calculator {
  constructor(totalTextElement, currentTextElement) {
    this.totalTextElement = totalTextElement;
    this.currentTextElement = currentTextElement;
    this.clear();
  }

  clear() {
    this.currentOperand = '';
    this.totalOperand = '';
    this.operation = undefined;
  }
  delete() {}
  appendNumber(number) {
    this.currentOperand = number;
  }
  chooseOperation(operation) {}

  compute() {}

  updateDisplay() {
    this.currentTextElement.innerText = this.currentOperand;
  }
}

const numberButtons = document.querySelectorAll('[data-number]');
const operationButtons = document.querySelectorAll('[data-operation]');
const equalButton = document.querySelector('[data-equal]');
const deleteButton = document.querySelector('[data-delete]');
const clearButton = document.querySelector('[data-clear]');
const totalTextElement = document.querySelector('[data-total-calculator]');
const currentTextElement = document.querySelector('[data-current-calculator]');

const calculator = new Calculator(totalTextElement, currentTextElement);

numberButtons.forEach((button) => {
  button.addEventListener('click', () => {
    calculator.appendNumber(button.innerText);
    calculator.updateDisplay();
  });
});
