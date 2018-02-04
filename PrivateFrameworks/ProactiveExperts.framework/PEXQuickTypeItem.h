/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXQuickTypeItem : PEXItem <NSCopying, NSSecureCoding> {
    NSDate * _date;
    unsigned int  _fields;
    unsigned char  _flags;
    NSString * _label;
    NSString * _name;
    NSString * _originatingBundleID;
    NSURL * _originatingWebsiteURL;
    unsigned long long  _predictionAge;
    bool  _shouldAggregate;
    NSString * _value;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) unsigned int fields;
@property (nonatomic) unsigned char flags;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *originatingBundleID;
@property (nonatomic, retain) NSURL *originatingWebsiteURL;
@property (nonatomic) unsigned long long predictionAge;
@property (nonatomic) bool shouldAggregate;
@property (nonatomic, retain) NSString *value;

+ (id)quickTypeItemWithLabel:(id)arg1 value:(id)arg2 name:(id)arg3 date:(id)arg4 fields:(unsigned int)arg5 originatingBundleID:(id)arg6 originatingWebsiteURL:(id)arg7 predictionAge:(unsigned long long)arg8 shouldAggregate:(bool)arg9 flags:(unsigned char)arg10 score:(double)arg11 source:(unsigned char)arg12 sourceIdentifier:(id)arg13;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)fields;
- (unsigned char)flags;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 value:(id)arg2 name:(id)arg3 date:(id)arg4 fields:(unsigned int)arg5 originatingBundleID:(id)arg6 originatingWebsiteURL:(id)arg7 predictionAge:(unsigned long long)arg8 shouldAggregate:(bool)arg9 flags:(unsigned char)arg10 score:(double)arg11 source:(unsigned char)arg12 sourceIdentifier:(id)arg13;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToQuickTypeItem:(id)arg1;
- (id)label;
- (id)name;
- (id)originatingBundleID;
- (id)originatingWebsiteURL;
- (unsigned long long)predictionAge;
- (void)setDate:(id)arg1;
- (void)setFields:(unsigned int)arg1;
- (void)setFlags:(unsigned char)arg1;
- (void)setLabel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOriginatingBundleID:(id)arg1;
- (void)setOriginatingWebsiteURL:(id)arg1;
- (void)setPredictionAge:(unsigned long long)arg1;
- (void)setShouldAggregate:(bool)arg1;
- (void)setValue:(id)arg1;
- (bool)shouldAggregate;
- (id)value;

@end
