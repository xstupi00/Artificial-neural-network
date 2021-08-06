/*
 * Architektury výpočetních systémů (AVS 2019)
 * Projekt c. 1 (ANN)
 * Login: xstupi00
 */

/**
 * @brief Returns output of the neuron as product of inputs, sums and bias
 * @param inputSize   - number of inputs the neuron
 * @param neuronCount - number of neurons in the layer
 * @param input       - pointer to neuron input array (identical for all neurons in the layer)
 * @param weights     - pointer to weights for all neurons in the layer
 * @param bias        - bias value of the neuron
 * @param neuronId    - ID of the neuron in layer (position)
 * @return Output of the neuron
 */
#pragma omp declare simd uniform(inputSize, neuronCount, input, weight) linear(neuronId) simdlen(8) notinbranch
float evalNeuron(
  size_t inputSize,
  size_t neuronCount,
  const float* input,
  const float* weight,
  float bias,
  size_t neuronId
);
