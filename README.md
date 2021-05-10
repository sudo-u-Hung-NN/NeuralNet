# NeuralNet
Code entirely with C language

Contact: 

*Mail*: hung.nn184118@sis.hust.edu.vn *or* nguyennanghung20@gmail.com

*Facebook*: [Nguyễn Năng Hưng](https://www.facebook.com/hung.nguyennang.96/) 

## File Structure

1. Matrix
2. Vector
3. Linagb
4. Object
5. ExceptionHandling
6. Layer
   1. DenseLayer
   2. SoftmaxLayer
   3. Activation

## Global variables
1. ObjectList \*head
- **\*head** pointer points to the head of objects' list, contains all matrices and vectors declared in the program.
- When **newMatrix(...)** or **newVector(...)** is called, such new Matrix or new Vector is automatically add to **ObjectList**.
- When the program is finished, please call **cleanList(head)** to free all matrices and vectors.
2. Layer \*inputLayer
- **\*inputLayer** pointer points to the head of layers' list, contains all layers declared in the program.
- At the start of the program, please call function **void initInputLayer(...)** to initialize **\*inputLayer** pointer, if **\*inputLayer** is not initialized then the program will message error when compile.
- When **void addDenseLayer(...)** or **addSoftmaxLayer(...)** is called, that layer is automatically connected to the previous layer by **\*outputLayer** pointer.
3. Layer \*outputLayer
- **\*outputLayer** pointer points to the tail of layers' list.
- When a new layer is added, **\*outputLayer** is changed to point that latest layer.
