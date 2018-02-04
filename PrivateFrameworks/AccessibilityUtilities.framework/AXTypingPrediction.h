/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXTypingPrediction : NSObject {
    NSString * _fullWord;
    NSString * _prefix;
    double  _probability;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeToReplace;
    NSString * _textToInsert;
}

@property (nonatomic, copy) NSString *fullWord;
@property (nonatomic, copy) NSString *prefix;
@property (nonatomic) double probability;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeToReplace;
@property (nonatomic, copy) NSString *textToInsert;

- (void).cxx_destruct;
- (id)description;
- (id)fullWord;
- (id)prefix;
- (double)probability;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeToReplace;
- (void)setFullWord:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setProbability:(double)arg1;
- (void)setRangeToReplace:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextToInsert:(id)arg1;
- (id)textToInsert;

@end
