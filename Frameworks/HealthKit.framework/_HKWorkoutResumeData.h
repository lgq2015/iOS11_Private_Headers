/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKWorkoutResumeData : NSObject <NSSecureCoding> {
    NSMutableArray * _gaps;
    NSUUID * _lastUUID;
    bool  _lastUUIDInJournal;
}

@property (nonatomic, retain) NSMutableArray *gaps;
@property (nonatomic, retain) NSUUID *lastUUID;
@property (nonatomic) bool lastUUIDInJournal;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gaps;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastUUID;
- (bool)lastUUIDInJournal;
- (void)setGaps:(id)arg1;
- (void)setLastUUID:(id)arg1;
- (void)setLastUUIDInJournal:(bool)arg1;

@end
