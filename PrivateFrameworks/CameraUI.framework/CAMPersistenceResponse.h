/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPersistenceResponse : NSObject {
    NSDate * _creationDate;
    NSURL * _persistenceURL;
    NSString * _persistenceUUID;
    UIImage * _scrubberImage;
    unsigned short  _sessionIdentifier;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;
@property (nonatomic, readonly, copy) NSString *persistenceUUID;
@property (nonatomic, readonly, copy) UIImage *scrubberImage;
@property (nonatomic, readonly) unsigned short sessionIdentifier;

- (void).cxx_destruct;
- (id)creationDate;
- (id)description;
- (id)init;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 creationDate:(id)arg4 scubberImage:(id)arg5;
- (id)persistenceURL;
- (id)persistenceUUID;
- (id)scrubberImage;
- (unsigned short)sessionIdentifier;

@end
