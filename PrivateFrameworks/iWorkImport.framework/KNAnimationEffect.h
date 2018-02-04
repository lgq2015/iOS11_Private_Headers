/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationEffect : NSObject <KNAnimationPlugin> {
    KNAnimationContext * mAnimationContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)defaultAttributes;
+ (unsigned long long)directionType;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(long long)arg2;
+ (id)localizedMenuString:(long long)arg1;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(long long)arg1;
+ (id)updateDirectionAttributeValue:(long long)arg1 andCustomTextDirectionValue:(unsigned long long)arg2 turnOffBounce:(bool)arg3 turnOffMotionBlur:(bool)arg4 forAttributes:(id)arg5;

- (id)initWithAnimationContext:(id)arg1;

@end
