/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineSyncTask : NSObject {
    bool  _cancelled;
    <CPLEngineSyncTaskDelegate> * _delegate;
    CPLEngineLibrary * _engineLibrary;
    bool  _foreground;
    bool  _paused;
    <NSCoding> * _transportUserIdentifier;
}

@property (getter=isCancelled, setter=_setCancelled:) bool cancelled;
@property (retain) <CPLEngineSyncTaskDelegate> *delegate;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (nonatomic) bool foreground;
@property (getter=isPaused, setter=_setPaused:) bool paused;
@property (nonatomic, readonly) NSString *taskIdentifier;
@property (nonatomic, retain) <NSCoding> *transportUserIdentifier;

+ (id)taskWithEngineLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)_setCancelled:(bool)arg1;
- (void)_setPaused:(bool)arg1;
- (void)cancel;
- (id)delegate;
- (id)description;
- (unsigned long long)diskPressureState;
- (id)engineLibrary;
- (bool)foreground;
- (id)initWithEngineLibrary:(id)arg1;
- (bool)isCancelled;
- (bool)isPaused;
- (void)launch;
- (void)pause;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setForeground:(bool)arg1;
- (void)setTransportUserIdentifier:(id)arg1;
- (void)taskDidFinishWithError:(id)arg1;
- (void)taskDidProgress:(float)arg1 userInfo:(id)arg2;
- (id)taskIdentifier;
- (id)transportUserIdentifier;

@end
