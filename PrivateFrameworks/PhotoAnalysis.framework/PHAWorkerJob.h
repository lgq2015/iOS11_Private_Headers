/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAWorkerJob : NSObject <NSCopying> {
    unsigned long long  _countOfFailedStarts;
    <PHAWorkerJobDelegate> * _delegate;
    bool  _disableReactionCheck;
    bool  _ignoreFurtherResults;
    bool  _isReactionJob;
    double  _lastReportTimeAsInterval;
    PHPhotoLibrary * _photoLibrary;
    unsigned long long  _scenario;
    bool  _treatMissingResultsAsFailures;
    short  _workerType;
}

@property (nonatomic, readonly) float completionScore;
@property (nonatomic) unsigned long long countOfFailedStarts;
@property (nonatomic) <PHAWorkerJobDelegate> *delegate;
@property (nonatomic) bool disableReactionCheck;
@property (nonatomic, readonly) bool finished;
@property (nonatomic) bool ignoreFurtherResults;
@property (readonly) double intervalSinceLastReport;
@property (setter=setIsReactionJob:, nonatomic) bool isReactionJob;
@property double lastReportTimeAsInterval;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) unsigned long long scenario;
@property (nonatomic) bool treatMissingResultsAsFailures;
@property (nonatomic, readonly) short workerType;

- (void).cxx_destruct;
- (float)completionScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countOfFailedStarts;
- (id)delegate;
- (bool)disableReactionCheck;
- (void)extendTimeout;
- (void)finish;
- (bool)finished;
- (bool)ignoreFurtherResults;
- (id)init;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 library:(id)arg3;
- (double)intervalSinceLastReport;
- (bool)isEqualToWorkerJob:(id)arg1;
- (bool)isReactionJob;
- (double)lastReportTimeAsInterval;
- (id)photoLibrary;
- (void)prepare;
- (unsigned long long)scenario;
- (void)setCountOfFailedStarts:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableReactionCheck:(bool)arg1;
- (void)setIgnoreFurtherResults:(bool)arg1;
- (void)setIsReactionJob:(bool)arg1;
- (void)setLastReportTimeAsInterval:(double)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setTreatMissingResultsAsFailures:(bool)arg1;
- (bool)startProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (id)statusAsDictionary;
- (void)stopAcceptingResults;
- (bool)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (bool)treatMissingResultsAsFailures;
- (short)workerType;

@end
