/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroTitleColorConfiguration : MiroColorConfiguration <MiroTitleColorConfiguration> {
    NSString * _debugTitleName;
    int  _snapshotAspect;
    NSDictionary * _titleParameters;
}

@property (nonatomic, readonly) unsigned long long backgroundShapeColorTreatment;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *debugTitleName;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int snapshotAspect;
@property (nonatomic, readonly) unsigned long long subtitleColorTreatment;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long titleColorTreatment;
@property (nonatomic, retain) NSDictionary *titleParameters;
@property (nonatomic, readonly) bool titleStyleHasColorRigging;
@property (nonatomic, readonly) bool titleStyleHasStrap;
@property (nonatomic, readonly) bool titleStyleIsCentered;
@property (nonatomic, readonly) bool titleStyleIsLowerThird;
@property (nonatomic, readonly) bool titleStyleIsSideBySide;

+ (void)initialize;
+ (id)titleColorConfigurationWithTitleStyleID:(id)arg1 snapshotAspect:(int)arg2 randomizerSeed:(unsigned int)arg3;

- (void).cxx_destruct;
- (bool)_verifyTitleStylesAreCorrect:(id)arg1;
- (unsigned long long)backgroundShapeColorTreatment;
- (id)debugDescription;
- (id)debugTitleName;
- (id)description;
- (id)initWithTitleStyleID:(id)arg1 randomizerSeed:(unsigned int)arg2;
- (void)setDebugTitleName:(id)arg1;
- (void)setSnapshotAspect:(int)arg1;
- (void)setTitleParameters:(id)arg1;
- (int)snapshotAspect;
- (unsigned long long)subtitleColorTreatment;
- (unsigned long long)titleColorTreatment;
- (id)titleParameters;
- (bool)titleStyleHasColorRigging;
- (bool)titleStyleHasStrap;
- (bool)titleStyleIsCentered;
- (bool)titleStyleIsLowerThird;
- (bool)titleStyleIsSideBySide;

@end
