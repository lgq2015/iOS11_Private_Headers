/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicJSNativeViewEventRequest : NSObject {
    id /* block */  _completion;
    NSDictionary * _extraInfo;
    long long  _nativeViewEventType;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, copy) NSDictionary *extraInfo;
@property (nonatomic) long long nativeViewEventType;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)extraInfo;
- (long long)nativeViewEventType;
- (void)setCompletion:(id /* block */)arg1;
- (void)setExtraInfo:(id)arg1;
- (void)setNativeViewEventType:(long long)arg1;

@end
