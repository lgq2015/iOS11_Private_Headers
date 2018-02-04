/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDTextureDescription : NSObject <NSCopying> {
    int  _byGlyphStyle;
    unsigned long long  _deliveryStyle;
    unsigned int  _isMagicMove;
    <TSDAnimationSession> * _session;
    unsigned int  _shouldAddFinal;
    unsigned int  _shouldAddMagicMoveObjectOnly;
    unsigned int  _shouldAddMasks;
    bool  _shouldAddNoShapeAttributes;
    unsigned int  _shouldAddParameterizedStroke;
    unsigned int  _shouldDistortToFit;
    unsigned int  _shouldForceTextureGeneration;
    unsigned int  _shouldIgnoreScaleInSourceImage;
    unsigned int  _shouldNotAddContainedReps;
    unsigned int  _shouldNotAddShapeAttributes;
    unsigned int  _shouldNotAddText;
    unsigned int  _shouldReverseStrokeDrawing;
    unsigned int  _shouldSeparateReflection;
    unsigned int  _shouldSeparateShadow;
    unsigned int  _shouldSeparateStroke;
    unsigned int  _shouldSeparateText;
    unsigned long long  _stage;
}

@property (nonatomic) int byGlyphStyle;
@property (nonatomic) unsigned long long deliveryStyle;
@property (nonatomic) bool isMagicMove;
@property (nonatomic) <TSDAnimationSession> *session;
@property (nonatomic) bool shouldAddFinal;
@property (nonatomic) bool shouldAddMagicMoveObjectOnly;
@property (nonatomic) bool shouldAddMasks;
@property (nonatomic) bool shouldAddParameterizedStroke;
@property (nonatomic) bool shouldDistortToFit;
@property (nonatomic) bool shouldForceTextureGeneration;
@property (nonatomic) bool shouldIgnoreScaleInSourceImage;
@property (nonatomic) bool shouldNotAddContainedReps;
@property (nonatomic) bool shouldNotAddShapeAttributes;
@property (nonatomic) bool shouldNotAddText;
@property (nonatomic) bool shouldReverseStrokeDrawing;
@property (nonatomic) bool shouldSeparateReflection;
@property (nonatomic) bool shouldSeparateShadow;
@property (nonatomic) bool shouldSeparateStroke;
@property (nonatomic) bool shouldSeparateText;
@property (nonatomic) unsigned long long stage;

+ (id)descriptionWithSession:(id)arg1;
+ (id)descriptionWithTextureDescription:(id)arg1;

- (void).cxx_destruct;
- (int)byGlyphStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)deliveryStyle;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isMagicMove;
- (void)reset;
- (id)session;
- (void)setByGlyphStyle:(int)arg1;
- (void)setDeliveryStyle:(unsigned long long)arg1;
- (void)setIsMagicMove:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setShouldAddFinal:(bool)arg1;
- (void)setShouldAddMagicMoveObjectOnly:(bool)arg1;
- (void)setShouldAddMasks:(bool)arg1;
- (void)setShouldAddParameterizedStroke:(bool)arg1;
- (void)setShouldDistortToFit:(bool)arg1;
- (void)setShouldForceTextureGeneration:(bool)arg1;
- (void)setShouldIgnoreScaleInSourceImage:(bool)arg1;
- (void)setShouldNotAddContainedReps:(bool)arg1;
- (void)setShouldNotAddShapeAttributes:(bool)arg1;
- (void)setShouldNotAddText:(bool)arg1;
- (void)setShouldReverseStrokeDrawing:(bool)arg1;
- (void)setShouldSeparateReflection:(bool)arg1;
- (void)setShouldSeparateShadow:(bool)arg1;
- (void)setShouldSeparateStroke:(bool)arg1;
- (void)setShouldSeparateText:(bool)arg1;
- (void)setStage:(unsigned long long)arg1;
- (bool)shouldAddFinal;
- (bool)shouldAddMagicMoveObjectOnly;
- (bool)shouldAddMasks;
- (bool)shouldAddParameterizedStroke;
- (bool)shouldDistortToFit;
- (bool)shouldForceTextureGeneration;
- (bool)shouldIgnoreScaleInSourceImage;
- (bool)shouldNotAddContainedReps;
- (bool)shouldNotAddShapeAttributes;
- (bool)shouldNotAddText;
- (bool)shouldReverseStrokeDrawing;
- (bool)shouldSeparateReflection;
- (bool)shouldSeparateShadow;
- (bool)shouldSeparateStroke;
- (bool)shouldSeparateText;
- (unsigned long long)stage;

@end
