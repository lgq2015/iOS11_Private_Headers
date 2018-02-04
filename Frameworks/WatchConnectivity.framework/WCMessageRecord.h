/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCMessageRecord : NSObject {
    id /* block */  _errorHandler;
    bool  _expectsResponse;
    NSString * _identifier;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (readonly, copy) id /* block */ errorHandler;
@property (readonly) bool expectsResponse;
@property (readonly, copy) NSString *identifier;
@property (retain) NSObject<OS_dispatch_source> *timeoutTimer;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id /* block */)errorHandler;
- (bool)expectsResponse;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 errorHandler:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (id)timeoutTimer;

@end
