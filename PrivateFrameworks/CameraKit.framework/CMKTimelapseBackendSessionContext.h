/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKTimelapseBackendSessionContext : NSObject {
    NSArray * _filesToDelete;
    NSArray * _filesToWrite;
    CMKTimelapseState * _state;
    NSString * _timelapseUUID;
}

@property (nonatomic, retain) NSArray *filesToDelete;
@property (nonatomic, retain) NSArray *filesToWrite;
@property (nonatomic, retain) CMKTimelapseState *state;
@property (nonatomic, readonly) NSString *timelapseUUID;

- (void).cxx_destruct;
- (id)description;
- (id)filesToDelete;
- (id)filesToWrite;
- (id)init;
- (id)initWithTimelapseUUID:(id)arg1;
- (void)setFilesToDelete:(id)arg1;
- (void)setFilesToWrite:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (id)timelapseUUID;

@end
