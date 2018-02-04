/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSystemStateProvider : NSObject {
    NSXPCConnection * _connection;
    unsigned long long  _currentState;
}

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)_sendState:(unsigned long long)arg1 value:(bool)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)noteChangeOfState:(unsigned long long)arg1 newValue:(bool)arg2;
- (void)noteOccurrenceOfEvent:(unsigned long long)arg1;

@end
