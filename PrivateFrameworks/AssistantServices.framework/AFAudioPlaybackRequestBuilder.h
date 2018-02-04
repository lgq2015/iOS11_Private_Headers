/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAudioPlaybackRequestBuilder : NSObject {
    AFAudioPlaybackRequest * _baseObject;
    struct _builderFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasItemURL : 1; 
        unsigned int hasNumberOfLoops : 1; 
        unsigned int hasVolume : 1; 
        unsigned int hasFadeInDuration : 1; 
        unsigned int hasFadeOutDuration : 1; 
        unsigned int hasUserInfo : 1; 
    }  _builderFlags;
    double  _fadeInDuration;
    double  _fadeOutDuration;
    NSURL * _itemURL;
    long long  _numberOfLoops;
    NSDictionary * _userInfo;
    float  _volume;
}

- (void).cxx_destruct;
- (id)build;
- (id)init;
- (id)initWithBaseObject:(id)arg1;
- (id)setFadeInDuration:(double)arg1;
- (id)setFadeOutDuration:(double)arg1;
- (id)setItemURL:(id)arg1;
- (id)setNumberOfLoops:(long long)arg1;
- (id)setUserInfo:(id)arg1;
- (id)setVolume:(float)arg1;

@end
