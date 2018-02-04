/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKShapeDetectionLogger : NSObject

+ (void)initialize;
+ (id)sharedInstance;

- (id)_fileName:(id)arg1;
- (bool)_loggingIsEnabled;
- (id)_logsPath;
- (id)_newLogPathWithShapeName:(id)arg1;
- (void)logCHDrawingToDisk:(id)arg1 withIntendedShape:(long long)arg2;
- (void)openFinderWindowToLogs;

@end
