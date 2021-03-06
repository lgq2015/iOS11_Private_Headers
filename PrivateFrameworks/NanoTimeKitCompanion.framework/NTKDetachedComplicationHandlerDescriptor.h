/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKDetachedComplicationHandlerDescriptor : NSObject {
    NSString * _bundleIdentifier;
    NTKComplication * _complication;
    <NTKTemplateComplicationDisplay> * _display;
    long long  _family;
    NSString * _identifier;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) NTKComplication *complication;
@property (nonatomic) <NTKTemplateComplicationDisplay> *display;
@property (nonatomic) long long family;
@property (nonatomic, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)complication;
- (id)display;
- (long long)family;
- (id)identifier;
- (void)setBundleIdentifier:(id)arg1;
- (void)setComplication:(id)arg1;
- (void)setDisplay:(id)arg1;
- (void)setFamily:(long long)arg1;
- (void)setIdentifier:(id)arg1;

@end
