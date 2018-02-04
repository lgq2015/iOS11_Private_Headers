/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCaptureRequest : NSObject <CAMDistinctPersistenceCopying, NSCopying> {
    unsigned int  _assertionIdentifier;
    long long  _captureDevice;
    long long  _captureMode;
    long long  _captureOrientation;
    bool  _capturedFromPhotoBooth;
    unsigned long long  _deferredPersistenceOptions;
    CLHeading * _heading;
    NSURL * _localDestinationURL;
    CLLocation * _location;
    long long  _origin;
    long long  _persistenceOptions;
    NSString * _persistenceUUID;
    long long  _photoEncodingBehavior;
    long long  _pressType;
    unsigned short  _sessionIdentifier;
    bool  _shouldDelayRemotePersistence;
    bool  _shouldExtractDiagnosticsFromMetadata;
    bool  _shouldPersistDiagnosticsToSidecar;
    long long  _temporaryPersistenceOptions;
    long long  _type;
    long long  _videoEncodingBehavior;
}

@property (nonatomic, readonly) unsigned int assertionIdentifier;
@property (nonatomic, readonly) long long captureDevice;
@property (nonatomic, readonly) long long captureMode;
@property (nonatomic, readonly) long long captureOrientation;
@property (nonatomic, readonly) bool capturedFromPhotoBooth;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long deferredPersistenceOptions;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLHeading *heading;
@property (nonatomic, readonly, copy) NSURL *localDestinationURL;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) long long origin;
@property (nonatomic, readonly) long long persistenceOptions;
@property (nonatomic, readonly, copy) NSString *persistenceUUID;
@property (nonatomic, readonly) long long photoEncodingBehavior;
@property (nonatomic, readonly) long long pressType;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly) bool shouldDelayRemotePersistence;
@property (nonatomic, readonly) bool shouldExtractDiagnosticsFromMetadata;
@property (nonatomic, readonly) bool shouldPersistDiagnosticsToSidecar;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long temporaryPersistenceOptions;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long videoEncodingBehavior;

+ (bool)shouldPersistToIncomingDirectoryWithPersistenceOptions:(long long)arg1 temporaryPersistenceOptions:(long long)arg2;

- (void).cxx_destruct;
- (unsigned int)assertionIdentifier;
- (long long)captureDevice;
- (long long)captureMode;
- (long long)captureOrientation;
- (bool)capturedFromPhotoBooth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)deferredPersistenceOptions;
- (id)distinctPersistenceCopy;
- (id)heading;
- (id)init;
- (id)initWithRequest:(id)arg1 distinctPersistence:(bool)arg2;
- (id)initWithType:(long long)arg1;
- (id)localDestinationURL;
- (id)location;
- (long long)origin;
- (long long)persistenceOptions;
- (id)persistenceUUID;
- (long long)photoEncodingBehavior;
- (long long)pressType;
- (unsigned short)sessionIdentifier;
- (bool)shouldDelayRemotePersistence;
- (bool)shouldExtractDiagnosticsFromMetadata;
- (bool)shouldPersistDiagnosticsToSidecar;
- (bool)shouldPersistToIncomingDirectory;
- (bool)shouldProtectPersistence;
- (long long)temporaryPersistenceOptions;
- (long long)type;
- (long long)videoEncodingBehavior;

@end
