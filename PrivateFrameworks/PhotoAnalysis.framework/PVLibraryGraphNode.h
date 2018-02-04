/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PVLibraryGraphNode : MANode <PVAssetProtocol, PVFaceProtocol, PVMomentProtocol, PVPersonProtocol>

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } approximateCoordinate;
@property (nonatomic, readonly) double centerX;
@property (nonatomic, readonly) double centerY;
@property (nonatomic, readonly) NSString *cloudIdentifier;
@property (nonatomic, readonly) NSDate *clsDistanceIdentity;
@property (nonatomic, readonly) long long clusterSequenceNumber;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *distanceIdentity;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long estimatedAssetCount;
@property (nonatomic, readonly) unsigned long long faceCount;
@property (nonatomic, readonly) NSData *faceprintData;
@property (nonatomic, readonly) bool favorite;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hidden;
@property (nonatomic) bool isVerified;
@property (nonatomic, retain) <PVFaceProtocol> *keyFace;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (readonly) NSString *localIdentifier;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } locationCoordinate;
@property (nonatomic) long long manualOrder;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *personLocalIdentifier;
@property (nonatomic) long long qualityMeasure;
@property (nonatomic, readonly) double size;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long verifiedType;

+ (id)dateForTimeInterval:(double)arg1;
+ (double)timeIntervalForDate:(id)arg1;

- (struct CLLocationCoordinate2D { double x1; double x2; })approximateCoordinate;
- (double)centerX;
- (double)centerY;
- (id)cloudIdentifier;
- (id)clsDistanceIdentity;
- (long long)clusterSequenceNumber;
- (id)creationDate;
- (id)distanceIdentity;
- (id)endDate;
- (unsigned long long)estimatedAssetCount;
- (unsigned long long)faceCount;
- (unsigned long long)faceCountInFaceGroup;
- (id)faceprintData;
- (bool)favorite;
- (bool)hidden;
- (bool)isDirty;
- (bool)isVerified;
- (id)keyFace;
- (id)localIdentifier;
- (struct CLLocationCoordinate2D { double x1; double x2; })locationCoordinate;
- (long long)manualOrder;
- (id)name;
- (id)personLocalIdentifier;
- (void)pv_addMergeCandidatePersons:(id)arg1;
- (long long)qualityMeasure;
- (void)setIsVerified:(bool)arg1;
- (void)setKeyFace:(id)arg1;
- (void)setManualOrder:(long long)arg1;
- (void)setQualityMeasure:(long long)arg1;
- (double)size;
- (id)startDate;
- (unsigned long long)type;
- (long long)verifiedType;

@end
