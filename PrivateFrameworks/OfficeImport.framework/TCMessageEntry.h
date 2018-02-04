/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCMessageEntry : NSObject {
    NSMutableArray * m_affectedObjects;
    int  m_count;
    NSArray * m_parameters;
    int  m_tag;
    NSString * m_text;
    unsigned long long  m_timeStamp;
}

@property (nonatomic) unsigned long long timeStamp;

+ (void)initialize;

- (void)addAffectedObject:(id)arg1;
- (id)affectedObjects;
- (void)dealloc;
- (id)description;
- (int)getCount;
- (int)getMessageTag;
- (id)getMessageText;
- (id)getParameter:(unsigned int)arg1;
- (unsigned long long)getParameterCount;
- (unsigned long long)hash;
- (id)initWithTag:(int)arg1 affectedObject:(id)arg2 text:(id)arg3 parameters:(char *)arg4;
- (bool)isEqual:(id)arg1;
- (void)mergeEntries:(id)arg1;
- (void)setTimeStamp:(unsigned long long)arg1;
- (unsigned long long)timeStamp;
- (long long)timeStampCompare:(id)arg1;

@end
