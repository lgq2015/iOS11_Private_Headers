/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKFeedRequest : NSObject {
    NSString * _feedID;
    unsigned long long  _hardResultsLimit;
    unsigned long long  _orderLimit;
    unsigned long long  _softResultsLimit;
    NSData * _startCursor;
    unsigned long long  _startOrder;
}

@property (nonatomic, copy) NSString *feedID;
@property (nonatomic) unsigned long long hardResultsLimit;
@property (nonatomic) unsigned long long orderLimit;
@property (nonatomic) unsigned long long softResultsLimit;
@property (nonatomic, copy) NSData *startCursor;
@property (nonatomic) unsigned long long startOrder;

- (void).cxx_destruct;
- (id)description;
- (id)feedID;
- (unsigned long long)hardResultsLimit;
- (id)init;
- (unsigned long long)orderLimit;
- (void)setFeedID:(id)arg1;
- (void)setHardResultsLimit:(unsigned long long)arg1;
- (void)setOrderLimit:(unsigned long long)arg1;
- (void)setSoftResultsLimit:(unsigned long long)arg1;
- (void)setStartCursor:(id)arg1;
- (void)setStartOrder:(unsigned long long)arg1;
- (unsigned long long)softResultsLimit;
- (id)startCursor;
- (unsigned long long)startOrder;

@end
