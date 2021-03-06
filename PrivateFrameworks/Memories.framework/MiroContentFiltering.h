/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroContentFiltering : NSObject

+ (double)addBackMoreAfterDurationInSecondsFast;
+ (double)addBackMoreAfterDurationInSecondsMedium;
+ (double)addBackMoreAfterDurationInSecondsSlow;
+ (int)assumedPhotoDuration;
+ (double)bRollAdjustForRequiredBRollPercentage;
+ (double)bRollAdjustPercentageDefault;
+ (double)bRollAdjustPercentageFast;
+ (double)bRollAdjustPercentageMedium;
+ (double)bRollAdjustPercentageSlow;
+ (int)clusterCountToTrim;
+ (int)clusterTooLargeTrim;
+ (int)endingGroupingCount;
+ (id)liveValueForKey:(id)arg1;
+ (int)maxiumumDurationToSendAll;
+ (int)minCountToAllowEndGrouping;
+ (int)minimumDurationToFilter;
+ (int)minimumScoreAllowed;
+ (int)minimumScoreAllowedAsBRoll;
+ (double)postSelectionDupeTestDurationInSeconds;
+ (double)shootingRatioMaxDurationRatioAbove;
+ (double)shootingRatioMaxDurationRatioBelow;
+ (double)shootingRatioMaxOverSuggestedMultiplier;
+ (double)shootingRatioMinBestDuration;
+ (double)shootingRatioSmallSetRatio;
+ (double)sloMoClusterTimeDurationInSeconds;
+ (double)videoTooShortInSeconds;

@end
