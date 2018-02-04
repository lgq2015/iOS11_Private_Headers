/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPBGLayoutState : NSObject {
    bool  _active;
    NSDate * _startDate;
    long long  _suspendCount;
}

@property (nonatomic) bool active;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) long long suspendCount;

- (void).cxx_destruct;
- (bool)active;
- (void)setActive:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setSuspendCount:(long long)arg1;
- (id)startDate;
- (long long)suspendCount;

@end
