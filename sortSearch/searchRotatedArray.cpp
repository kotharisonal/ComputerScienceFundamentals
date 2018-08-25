

size_t findRotationPoint(const vector<string>& words)
{
    size_t floorIndex = 0;
    size_t ceilingIndex = words.size() - 1;

    while (floorIndex < ceilingIndex) {

        // guess a point halfway between floor and ceiling
        size_t guessIndex = floorIndex + ((ceilingIndex - floorIndex) / 2);

        // if guess comes after first word or is the first word
        if (words[guessIndex] >= words[floorIndex]) {
            // go right
            floorIndex = guessIndex;
        }
        else {
            // go left
            ceilingIndex = guessIndex;
        }

        // if floor and ceiling have converged
        if (floorIndex + 1 == ceilingIndex) {

            // between floor and ceiling is where we flipped to the beginning
            // so ceiling is alphabetically first
            break;
        }
    }

    return ceilingIndex;
}
