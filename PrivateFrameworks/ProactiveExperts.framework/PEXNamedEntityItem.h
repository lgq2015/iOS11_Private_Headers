/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXNamedEntityItem : PEXItem <NSCopying, NSSecureCoding> {
    NSDate * _contentCreationDate;
    unsigned long long  _detectionAlgorithm;
    NSDate * _detectionDate;
    NSString * _donorBundleIdentifier;
    NSString * _languageIdentifier;
    NSString * _name;
    NSString * _phoneticName;
    unsigned char  _type;
}

@property (nonatomic, readonly) NSDate *contentCreationDate;
@property (nonatomic, readonly) unsigned long long detectionAlgorithm;
@property (nonatomic, readonly) NSDate *detectionDate;
@property (nonatomic, readonly) NSString *donorBundleIdentifier;
@property (nonatomic, readonly) NSString *languageIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *phoneticName;
@property (nonatomic, readonly) unsigned char type;

+ (id)namedEntityItemWithName:(id)arg1 phoneticName:(id)arg2 type:(unsigned char)arg3 languageIdentifier:(id)arg4 contentCreationDate:(id)arg5 detectionDate:(id)arg6 score:(double)arg7 source:(unsigned char)arg8 sourceIdentifier:(id)arg9 changeType:(unsigned char)arg10;
+ (id)namedEntityItemWithName:(id)arg1 phoneticName:(id)arg2 type:(unsigned char)arg3 languageIdentifier:(id)arg4 contentCreationDate:(id)arg5 detectionDate:(id)arg6 score:(double)arg7 source:(unsigned char)arg8 sourceIdentifier:(id)arg9 changeType:(unsigned char)arg10 donorBundleIdentifier:(id)arg11 detectionAlgorithm:(unsigned long long)arg12;
+ (id)namedEntityItemsFromContactNameItem:(id)arg1;
+ (unsigned char)namedEntityTypeFromPPCategory:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentCreationDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)detectionAlgorithm;
- (id)detectionDate;
- (id)donorBundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 phoneticName:(id)arg2 type:(unsigned char)arg3 languageIdentifier:(id)arg4 contentCreationDate:(id)arg5 detectionDate:(id)arg6 score:(double)arg7 source:(unsigned char)arg8 sourceIdentifier:(id)arg9 changeType:(unsigned char)arg10;
- (id)initWithName:(id)arg1 phoneticName:(id)arg2 type:(unsigned char)arg3 languageIdentifier:(id)arg4 contentCreationDate:(id)arg5 detectionDate:(id)arg6 score:(double)arg7 source:(unsigned char)arg8 sourceIdentifier:(id)arg9 changeType:(unsigned char)arg10 donorBundleIdentifier:(id)arg11 detectionAlgorithm:(unsigned long long)arg12;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNamedEntityItem:(id)arg1;
- (id)languageIdentifier;
- (id)name;
- (id)phoneticName;
- (unsigned char)type;
- (id)typeString;

@end
