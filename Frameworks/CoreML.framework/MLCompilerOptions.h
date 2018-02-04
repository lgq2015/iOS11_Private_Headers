/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLCompilerOptions : NSObject {
    bool  _dryRun;
    NSString * _platform;
    NSString * _platformVersion;
}

@property bool dryRun;
@property (retain) NSString *platform;
@property (retain) NSString *platformVersion;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (bool)dryRun;
- (id)init;
- (id)platform;
- (id)platformVersion;
- (void)setDryRun:(bool)arg1;
- (void)setPlatform:(id)arg1;
- (void)setPlatformVersion:(id)arg1;

@end
