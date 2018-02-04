/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKSupplementaryViewMetrics : NSObject <NSCopying> {
    long long  _animateWithSection;
    SEL  _configurator;
    double  _desiredHeight;
    double  _desiredWidth;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _globalSectionRange;
    bool  _hidden;
    NSString * _kind;
    Class  _reusableViewClass;
    bool  _shouldPin;
    bool  _shouldPinGlobal;
    bool  _shouldUseGlobalIndexing;
    id  _target;
}

@property (nonatomic) long long animateWithSection;
@property (nonatomic) SEL configurator;
@property (nonatomic) double desiredHeight;
@property (nonatomic) double desiredWidth;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } globalSectionRange;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, retain) NSString *kind;
@property (nonatomic) Class reusableViewClass;
@property (nonatomic) bool shouldPin;
@property (nonatomic) bool shouldPinGlobal;
@property (nonatomic) bool shouldUseGlobalIndexing;
@property (nonatomic) id target;

+ (id)supplementaryMetrics;

- (long long)animateWithSection;
- (SEL)configurator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)desiredHeight;
- (double)desiredWidth;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })globalSectionRange;
- (id)init;
- (bool)isHidden;
- (id)kind;
- (id)localDescription;
- (Class)reusableViewClass;
- (void)setAnimateWithSection:(long long)arg1;
- (void)setConfigurator:(SEL)arg1;
- (void)setDesiredHeight:(double)arg1;
- (void)setDesiredWidth:(double)arg1;
- (void)setGlobalSectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setKind:(id)arg1;
- (void)setReusableViewClass:(Class)arg1;
- (void)setShouldPin:(bool)arg1;
- (void)setShouldPinGlobal:(bool)arg1;
- (void)setShouldUseGlobalIndexing:(bool)arg1;
- (void)setTarget:(id)arg1;
- (bool)shouldPin;
- (bool)shouldPinGlobal;
- (bool)shouldUseGlobalIndexing;
- (struct CGSize { double x1; double x2; })sizeForCollectionView:(id)arg1;
- (id)target;

@end
