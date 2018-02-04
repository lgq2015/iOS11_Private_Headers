/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedRequest : NSObject <NSCopying> {
    bool  _cachedOnly;
    long long  _feedBin;
    NSString * _feedID;
    FCFeedRange * _feedRange;
    unsigned long long  _maxCount;
    FCFeedItemFeature * _requiredFeature;
}

@property (nonatomic) bool cachedOnly;
@property (nonatomic) long long feedBin;
@property (nonatomic, copy) NSString *feedID;
@property (nonatomic, copy) FCFeedRange *feedRange;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic, copy) FCFeedItemFeature *requiredFeature;

- (void).cxx_destruct;
- (bool)cachedOnly;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)feedBin;
- (id)feedID;
- (id)feedRange;
- (unsigned long long)maxCount;
- (id)requiredFeature;
- (void)setCachedOnly:(bool)arg1;
- (void)setFeedBin:(long long)arg1;
- (void)setFeedID:(id)arg1;
- (void)setFeedRange:(id)arg1;
- (void)setMaxCount:(unsigned long long)arg1;
- (void)setRequiredFeature:(id)arg1;

@end
