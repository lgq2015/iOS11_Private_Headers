/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKCaptureResponse : NSObject {
    NSDictionary * __parameterStorage;
    NSDictionary * _additionalInformation;
    CMKInflightAsset * _asset;
    bool  _completed;
    NSDictionary * _diagnostics;
    NSMutableDictionary * _metadata;
    CMKCaptureRequest * _request;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSDictionary *_parameterStorage;
@property (nonatomic, copy) NSDictionary *additionalInformation;
@property (nonatomic, retain) CMKInflightAsset *asset;
@property (getter=isCompleted, nonatomic) bool completed;
@property (nonatomic, copy) NSDictionary *diagnostics;
@property (nonatomic, retain) NSMutableDictionary *metadata;
@property (nonatomic, copy) CMKCaptureRequest *request;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)_parameterStorage;
- (id)additionalInformation;
- (id)asset;
- (id)diagnostics;
- (id)init;
- (id)initWithType:(long long)arg1;
- (bool)isCompleted;
- (id)metadata;
- (id)parameterForKey:(id)arg1;
- (void)releaseCachedImages;
- (id)request;
- (void)setAdditionalInformation:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setDiagnostics:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setRequest:(id)arg1;
- (long long)type;

@end
