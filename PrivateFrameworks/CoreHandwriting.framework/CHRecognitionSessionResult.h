/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHRecognitionSessionResult : NSObject <NSCopying> {
    NSDictionary * __recognitionResultsByGroupID;
    long long  __transcriptionCapability;
    struct { 
        double groupingDuration; 
        double recognitionDuration; 
        double totalDuration; 
    }  _generationDuration;
    NSArray * _locales;
    NSArray * _preferredLocales;
    CHStrokeGroupingResult * _strokeGroupingResult;
    <CHStrokeProviderVersion> * _strokeProviderVersion;
}

@property (nonatomic, readonly, copy) NSDictionary *_recognitionResultsByGroupID;
@property (nonatomic, readonly) long long _transcriptionCapability;
@property (nonatomic, readonly) NSString *allResultsDebugDescription;
@property (nonatomic, readonly) NSArray *allResultsDebugDescriptionByGroup;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } generationDuration;
@property (nonatomic, readonly) NSString *highConfidenceDebugDescription;
@property (nonatomic, readonly, copy) NSArray *locales;
@property (nonatomic, readonly, copy) NSArray *preferredLocales;
@property (nonatomic, readonly, retain) CHStrokeGroupingResult *strokeGroupingResult;
@property (nonatomic, readonly, retain) <CHStrokeProviderVersion> *strokeProviderVersion;

- (id)_recognitionResultsByGroupID;
- (id)_resultsDebugDescriptionIntoGroupsArray:(id)arg1 groupHeaderBlock:(id /* block */)arg2;
- (long long)_transcriptionCapability;
- (id)allResultsDebugDescription;
- (id)allResultsDebugDescriptionByGroup;
- (id)allResultsDebugDescriptionWithGroupHeaderBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (struct { double x1; double x2; double x3; })generationDuration;
- (id)highConfidenceDebugDescription;
- (id)init;
- (id)initWithStrokeProviderVersion:(id)arg1 locales:(id)arg2 preferredLocales:(id)arg3 strokeGroupingResult:(id)arg4 recognitionResults:(id)arg5 generationDuration:(struct { double x1; double x2; double x3; })arg6;
- (id)locales;
- (id)preferredLocales;
- (id)recognitionResultForStrokeGroupIdentifier:(long long)arg1;
- (id)strokeGroupingResult;
- (id)strokeProviderVersion;

@end
