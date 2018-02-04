/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiatorCaptionsResults : NSObject {
    bool  _isSupported;
    NSSet * _localLanguages;
    bool  _remoteCanDisplayCaptions;
    NSSet * _remoteLanguages;
}

@property (nonatomic) bool isSupported;
@property (nonatomic, retain) NSSet *localLanguages;
@property (nonatomic) bool remoteCanDisplayCaptions;
@property (nonatomic, retain) NSSet *remoteLanguages;

- (void)dealloc;
- (bool)isSupported;
- (id)localLanguages;
- (bool)remoteCanDisplayCaptions;
- (id)remoteLanguages;
- (void)setIsSupported:(bool)arg1;
- (void)setLocalLanguages:(id)arg1;
- (void)setRemoteCanDisplayCaptions:(bool)arg1;
- (void)setRemoteLanguages:(id)arg1;

@end
