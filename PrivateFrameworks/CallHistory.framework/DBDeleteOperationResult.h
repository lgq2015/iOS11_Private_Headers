/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface DBDeleteOperationResult : NSObject {
    unsigned long long  _count;
    bool  _didSucceed;
}

@property unsigned long long count;
@property bool didSucceed;

- (unsigned long long)count;
- (bool)didSucceed;
- (id)initWithCount:(unsigned long long)arg1 andDidSucceed:(bool)arg2;
- (void)setCount:(unsigned long long)arg1;
- (void)setDidSucceed:(bool)arg1;

@end
