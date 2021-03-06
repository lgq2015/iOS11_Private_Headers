/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface XPCTransaction : NSObject {
    NSString * _reason;
    bool  _tranactionCreated;
}

@property (retain) NSString *reason;
@property bool tranactionCreated;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithReason:(id)arg1;
- (id)reason;
- (void)setReason:(id)arg1;
- (void)setTranactionCreated:(bool)arg1;
- (bool)tranactionCreated;

@end
