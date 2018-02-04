/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFResultRankingFeedback : SFFeedback <NSCopying> {
    NSArray * _duplicateResults;
    NSArray * _hiddenResults;
    unsigned long long  _localResultPosition;
    double  _personalizationScore;
    SFSearchResult * _result;
}

@property (nonatomic, copy) NSArray *duplicateResults;
@property (nonatomic, copy) NSArray *hiddenResults;
@property (nonatomic) unsigned long long localResultPosition;
@property (nonatomic) double personalizationScore;
@property (nonatomic, retain) SFSearchResult *result;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)duplicateResults;
- (void)encodeWithCoder:(id)arg1;
- (id)hiddenResults;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(id)arg1 hiddenResults:(id)arg2 duplicateResults:(id)arg3 localResultPosition:(unsigned long long)arg4;
- (unsigned long long)localResultPosition;
- (double)personalizationScore;
- (id)result;
- (void)setDuplicateResults:(id)arg1;
- (void)setHiddenResults:(id)arg1;
- (void)setLocalResultPosition:(unsigned long long)arg1;
- (void)setPersonalizationScore:(double)arg1;
- (void)setResult:(id)arg1;

@end
