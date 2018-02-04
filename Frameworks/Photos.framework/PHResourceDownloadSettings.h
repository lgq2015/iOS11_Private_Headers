/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHResourceDownloadSettings : PHSettings {
    bool  _simulateDownload;
    bool  _simulateDownloadFailure;
}

@property (nonatomic) bool simulateDownload;
@property (nonatomic) bool simulateDownloadFailure;

+ (id)settingsControllerModule;
+ (id)sharedSettings;

- (id)parentSettings;
- (void)setDefaultValues;
- (void)setSimulateDownload:(bool)arg1;
- (void)setSimulateDownloadFailure:(bool)arg1;
- (bool)simulateDownload;
- (bool)simulateDownloadFailure;

@end
