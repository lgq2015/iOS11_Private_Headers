/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFace : PHObject <PFPhotosFaceRepresentation, PVFaceProtocol> {
    id  _adjustmentVersion;
    double  _blurScore;
    double  _centerX;
    double  _centerY;
    long long  _clusterSequenceNumber;
    short  _confirmedFaceCropGenerationState;
    double  _expressionConfidence;
    double  _expressionScore1;
    double  _expressionScore2;
    double  _expressionScore3;
    long long  _expressionType1;
    long long  _expressionType2;
    long long  _expressionType3;
    long long  _faceAlgorithmVersion;
    bool  _hasSmile;
    bool  _hidden;
    bool  _inTrash;
    bool  _leftEyeClosed;
    double  _leftEyeX;
    double  _leftEyeY;
    bool  _manual;
    double  _mouthX;
    double  _mouthY;
    long long  _nameSource;
    NSString * _personUUID;
    double  _posePitch;
    double  _poseRoll;
    double  _poseYaw;
    long long  _qualityMeasure;
    bool  _rightEyeClosed;
    double  _rightEyeX;
    double  _rightEyeY;
    double  _size;
    long long  _sourceHeight;
    long long  _sourceWidth;
    int  _trainingType;
}

@property (nonatomic, readonly, copy) id adjustmentVersion;
@property (nonatomic, readonly) double blurScore;
@property (nonatomic, readonly) double centerX;
@property (nonatomic, readonly) double centerY;
@property (nonatomic, readonly) long long clusterSequenceNumber;
@property (getter=isConfirmedFaceCropGenerationPending, nonatomic, readonly) bool confirmedFaceCropGenerationPending;
@property (nonatomic, readonly) short confirmedFaceCropGenerationState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double expressionConfidence;
@property (nonatomic) double expressionScore1;
@property (nonatomic) double expressionScore2;
@property (nonatomic) double expressionScore3;
@property (nonatomic) long long expressionType1;
@property (nonatomic) long long expressionType2;
@property (nonatomic) long long expressionType3;
@property (nonatomic) long long faceAlgorithmVersion;
@property (nonatomic, readonly) NSData *faceprintData;
@property (nonatomic, readonly) bool hasSmile;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (getter=isInTrash, nonatomic, readonly) bool inTrash;
@property (getter=isLeftEyeClosed, nonatomic, readonly) bool leftEyeClosed;
@property (nonatomic, readonly) double leftEyeX;
@property (nonatomic, readonly) double leftEyeY;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) bool manual;
@property (nonatomic, readonly) double mouthX;
@property (nonatomic, readonly) double mouthY;
@property (nonatomic, readonly) long long nameSource;
@property (nonatomic, readonly) NSString *personLocalIdentifier;
@property (nonatomic, readonly) NSString *personUUID;
@property (nonatomic) double posePitch;
@property (nonatomic) double poseRoll;
@property (nonatomic) double poseYaw;
@property (nonatomic) long long qualityMeasure;
@property (nonatomic, readonly) long long qualityMeasure;
@property (getter=isRightEyeClosed, nonatomic, readonly) bool rightEyeClosed;
@property (nonatomic, readonly) double rightEyeX;
@property (nonatomic, readonly) double rightEyeY;
@property (nonatomic, readonly) double size;
@property (nonatomic, readonly) long long sourceHeight;
@property (nonatomic, readonly) long long sourceWidth;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int trainingType;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_composePropertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)corePropertiesToFetch;
+ (id)croppingPropertiesToFetch;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchFacesForFaceCrop:(id)arg1 options:(id)arg2;
+ (id)fetchFacesForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchFacesForPersonsAssociatedWithFaceGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 options:(id)arg2;
+ (id)fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2;
+ (id)fetchFacesInAsset:(id)arg1 options:(id)arg2;
+ (id)fetchFacesInFaceGroup:(id)arg1 options:(id)arg2;
+ (id)fetchFacesOnAssetWithFace:(id)arg1 options:(id)arg2;
+ (id)fetchFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchFacesWithOptions:(id)arg1;
+ (id)fetchKeyFaceForFaceGroup:(id)arg1 options:(id)arg2;
+ (id)fetchKeyFaceForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchKeyFacesGroupedByPersons:(id)arg1;
+ (id)fetchRejectedFacesForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchSingletonFacesWithOptions:(id)arg1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsFaceState;
+ (id)personBuilderPropertiesToFetch;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;
+ (id)propertySetAccessorsByPropertySet;
+ (Class)propertySetClassForPropertySet:(id)arg1;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (id)_createPropertyObjectOfClass:(Class)arg1;
- (id)_createPropertyObjectOfClass:(Class)arg1 preFetchedProperties:(id)arg2;
- (id)adjustmentVersion;
- (double)blurScore;
- (double)centerX;
- (double)centerY;
- (Class)changeRequestClass;
- (long long)clusterSequenceNumber;
- (short)confirmedFaceCropGenerationState;
- (double)expressionConfidence;
- (double)expressionScore1;
- (double)expressionScore2;
- (double)expressionScore3;
- (long long)expressionType1;
- (long long)expressionType2;
- (long long)expressionType3;
- (long long)faceAlgorithmVersion;
- (id)faceClusteringProperties;
- (void)fetchPropertySetsIfNeeded;
- (bool)hasSmile;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isConfirmedFaceCropGenerationPending;
- (bool)isHidden;
- (bool)isInTrash;
- (bool)isLeftEyeClosed;
- (bool)isRightEyeClosed;
- (double)leftEyeX;
- (double)leftEyeY;
- (bool)manual;
- (double)mouthX;
- (double)mouthY;
- (long long)nameSource;
- (id)personLocalIdentifier;
- (id)personUUID;
- (double)posePitch;
- (double)poseRoll;
- (double)poseYaw;
- (long long)qualityMeasure;
- (double)rightEyeX;
- (double)rightEyeY;
- (void)setExpressionConfidence:(double)arg1;
- (void)setExpressionScore1:(double)arg1;
- (void)setExpressionScore2:(double)arg1;
- (void)setExpressionScore3:(double)arg1;
- (void)setExpressionType1:(long long)arg1;
- (void)setExpressionType2:(long long)arg1;
- (void)setExpressionType3:(long long)arg1;
- (void)setFaceAlgorithmVersion:(long long)arg1;
- (void)setPosePitch:(double)arg1;
- (void)setPoseRoll:(double)arg1;
- (void)setPoseYaw:(double)arg1;
- (double)size;
- (long long)sourceHeight;
- (long long)sourceWidth;
- (int)trainingType;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis

- (id)faceprintData;
- (double)photosFaceRepresentationBlurScore;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationCenterY;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (bool)photosFaceRepresentationHasSmile;
- (bool)photosFaceRepresentationIsLeftEyeClosed;
- (bool)photosFaceRepresentationIsRightEyeClosed;
- (id)photosFaceRepresentationLocalIdentifier;
- (long long)photosFaceRepresentationQualityMeasure;
- (double)photosFaceRepresentationSize;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;
- (void)setQualityMeasure:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_fetchKeyFaceForPerson:(id)arg1 options:(id)arg2;

- (bool)px_cropRectForPortraitImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })px_cropRectWithCropFactor:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })px_cropRectWithCropFactor:(double)arg1 bounded:(bool)arg2;
- (struct CGSize { double x1; double x2; })px_faceTileSizeAdjustingForImageAspectRatio:(struct CGSize { double x1; double x2; })arg1;

@end
