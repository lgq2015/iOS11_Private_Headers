/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneSettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    bool  _backgrounded;
    FBSDisplayConfiguration * _displayConfiguration;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    NSSet * _ignoreOcclusionReasons;
    long long  _interfaceOrientation;
    double  _level;
    bool  _occluded;
    bool  _occludedHasBeenCalculated;
    NSArray * _occlusions;
    BSSettings * _otherSettings;
    BSSettings * _transientLocalSettings;
}

@property (getter=isBackgrounded, nonatomic, readonly) bool backgrounded;
@property (nonatomic, readonly) Class canvasClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic, readonly, copy) FBSDisplayIdentity *displayIdentity;
@property (getter=isEffectivelyBackgrounded, nonatomic, readonly) bool effectivelyBackgrounded;
@property (getter=fb_isUnderLock, nonatomic, readonly) bool fb_underLock;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly) double level;
@property (nonatomic, readonly, copy) NSArray *occlusions;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (bool)_isMutable;
+ (id)settings;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayConfiguration;
- (id)displayIdentity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (unsigned long long)hash;
- (id)ignoreOcclusionReasons;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (long long)interfaceOrientation;
- (bool)isBackgrounded;
- (bool)isEqual:(id)arg1;
- (bool)isIgnoringOcclusions;
- (bool)isOccluded;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (double)level;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)occlusions;
- (id)otherSettings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)transientLocalSettings;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (Class)canvasClass;
- (bool)isUISubclass;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (id)fb_fallbackSpecification;
- (bool)fb_isUnderLock;
- (bool)isEffectivelyBackgrounded;

@end
