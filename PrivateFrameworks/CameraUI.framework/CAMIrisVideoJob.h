/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMIrisVideoJob : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    long long  _captureDevice;
    NSError * _captureError;
    long long  _captureOrientation;
    double  _captureTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    NSString * _filterName;
    NSURL * _filteredVideoURL;
    NSString * _irisIdentifier;
    long long  _persistenceOptions;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageDisplayTime;
    NSString * _stillImagePersistenceUUID;
    long long  _temporaryPersistenceOptions;
    NSString * _videoPersistenceUUID;
    NSURL * _videoURL;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) long long captureDevice;
@property (nonatomic, readonly) NSError *captureError;
@property (nonatomic, readonly) long long captureOrientation;
@property (nonatomic, readonly) double captureTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) NSString *filterName;
@property (nonatomic, readonly) NSURL *filteredVideoURL;
@property (nonatomic, readonly) NSString *irisIdentifier;
@property (nonatomic) long long persistenceOptions;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } stillImageDisplayTime;
@property (nonatomic, readonly) NSString *stillImagePersistenceUUID;
@property (nonatomic) long long temporaryPersistenceOptions;
@property (nonatomic, readonly) NSString *videoPersistenceUUID;
@property (nonatomic, readonly) NSURL *videoURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (long long)captureDevice;
- (id)captureError;
- (long long)captureOrientation;
- (double)captureTime;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)encodeWithCoder:(id)arg1;
- (id)filterName;
- (id)filteredVideoURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoURL:(id)arg1 stillImagePersistenceUUID:(id)arg2 videoPersistenceUUID:(id)arg3 irisIdentifier:(id)arg4 captureDevice:(long long)arg5 captureOrientation:(long long)arg6 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 stillImageDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg8 captureTime:(double)arg9 captureError:(id)arg10 filterName:(id)arg11 filteredVideoURL:(id)arg12 persistenceOptions:(long long)arg13 temporaryPersistenceOptions:(long long)arg14 bundleIdentifier:(id)arg15;
- (id)irisIdentifier;
- (long long)persistenceOptions;
- (void)setPersistenceOptions:(long long)arg1;
- (void)setTemporaryPersistenceOptions:(long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillImageDisplayTime;
- (id)stillImagePersistenceUUID;
- (long long)temporaryPersistenceOptions;
- (id)videoPersistenceUUID;
- (id)videoURL;

@end
