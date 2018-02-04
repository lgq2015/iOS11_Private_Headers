/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface _IMBalloonBundleApp : IMBalloonApp {
    Class  _browserClass;
    Class  _bubbleClass;
    Class  _dataSourceClass;
}

- (void).cxx_destruct;
- (void)_loadAppBundle;
- (void)_loadBundle;
- (Class)browserClass;
- (Class)bubbleClass;
- (Class)dataSourceClass;
- (id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2;
- (void)setBrowserClass:(Class)arg1;
- (void)setBubbleClass:(Class)arg1;
- (void)setDataSourceClass:(Class)arg1;

@end
