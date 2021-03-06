/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSArray;

@interface NSLinguisticTagger : NSObject  {
    NSArray *_schemes;
    unsigned int _options;
    NSString *_string;
    id _orthographyArray;
    id _tokenArray;
    id _reserved;
}

+ (BOOL)supportsLanguage:(id)arg1;
+ (id)availableTagSchemesForLanguage:(id)arg1;

- (id)possibleTagsAtIndex:(unsigned int)arg1 scheme:(id)arg2 tokenRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 sentenceRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg4 scores:(id*)arg5;
- (id)tagAtIndex:(unsigned int)arg1 scheme:(id)arg2 tokenRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 sentenceRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg4;
- (id)_rankedCandidatesForMisspelledRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 candidates:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })sentenceRangeForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)stringEditedInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 changeInLength:(int)arg2;
- (id)tagSchemes;
- (id)_tokenDataForParagraphAtIndex:(unsigned int)arg1 paragraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 requireLemmas:(BOOL)arg3 requirePartsOfSpeech:(BOOL)arg4 requireNamedEntities:(BOOL)arg5;
- (void)_tokenizeParagraphAtIndex:(unsigned int)arg1 requireLemmas:(BOOL)arg2 requirePartsOfSpeech:(BOOL)arg3 requireNamedEntities:(BOOL)arg4;
- (id)_tokenDataForParagraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 requireLemmas:(BOOL)arg2 requirePartsOfSpeech:(BOOL)arg3 requireNamedEntities:(BOOL)arg4;
- (void)_calculateSentenceRangesForParagraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_acceptSentencesForParagraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_analyzeTokensInInterwordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 paragraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_analyzeTokensInWordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 paragraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_analyzePunctuationTokensInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 paragraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)_acceptSentenceTerminatorRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 paragraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 tokens:(struct _NSLTToken { unsigned short x1; unsigned char x2; unsigned char x3; unsigned int x4; union { void *x_5_1_1; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; } x_5_1_2; } x5; }*)arg3 count:(unsigned int)arg4 tokenIndex:(unsigned int)arg5;
- (id)_tagSchemeForScheme:(id)arg1;
- (id)_rankedCandidatesForMisspelledRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 candidates:(id)arg2 contextualFrequencies:(id*)arg3 baseFrequencies:(id*)arg4;
- (id)orthographyAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)_tokenDataForParagraphAtIndex:(unsigned int)arg1 paragraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 tagScheme:(id)arg3;
- (void)enumerateTagsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 scheme:(id)arg2 options:(unsigned int)arg3 usingBlock:(id)arg4;
- (id)tagsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 scheme:(id)arg2 options:(unsigned int)arg3 tokenRanges:(id*)arg4;
- (void)setOrthography:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithTagSchemes:(id)arg1 options:(unsigned int)arg2;
- (id)string;
- (id)description;
- (void)setString:(id)arg1;
- (void)dealloc;

@end
