/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDJournalEntry : NSObject <NSSecureCoding> {
    bool  _requiresSecureDelete;
}

@property (nonatomic) bool requiresSecureDelete;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)requiresSecureDelete;
- (void)setRequiresSecureDelete:(bool)arg1;

@end
