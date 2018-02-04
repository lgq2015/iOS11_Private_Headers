/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface iOSPMR : NSObject {
    bool  gPMR_ENABLED;
}

+ (id)sharedInstance;

- (void)addDelta:(unsigned long long)arg1 toArray:(id)arg2;
- (double)convertNanoSecondsToSeconds:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (double)returnDelta_Milliseconds:(unsigned long long)arg1;
- (unsigned long long)returnDelta_Nanoseconds:(unsigned long long)arg1;
- (unsigned long long)returnStartTime_Nanoseconds;
- (id)stopTimerAndReportPMR:(unsigned long long)arg1 logFilename:(id)arg2 pmrKey:(id)arg3 comment:(id)arg4;
- (void)writePMRInfoToFile:(id)arg1 pmrString:(id)arg2;

@end
