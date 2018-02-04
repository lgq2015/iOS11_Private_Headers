/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPFeature : NSObject {
    double  _confidence;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _matchRange;
    NSString * _textUnit;
    double  _weight;
}

@property double confidence;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } matchRange;
@property (copy) NSString *textUnit;
@property double weight;

- (void).cxx_destruct;
- (double)confidence;
- (id)description;
- (bool)isMatchStringInsideQuotationMarks;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })matchRange;
- (id)matchString;
- (void)setConfidence:(double)arg1;
- (void)setMatchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextUnit:(id)arg1;
- (void)setWeight:(double)arg1;
- (id)textUnit;
- (double)weight;

@end
