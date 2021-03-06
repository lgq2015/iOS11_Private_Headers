/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFStartLocalSearchFeedback : SFStartSearchFeedback {
    unsigned long long  _indexType;
}

@property (nonatomic) unsigned long long indexType;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)indexType;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3 queryId:(unsigned long long)arg4;
- (void)setIndexType:(unsigned long long)arg1;

@end
