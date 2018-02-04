/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVExpandProperty : NSObject {
    NSString * _expandedName;
    NSString * _expandedNameSpace;
    NSSet * _propertiesToFind;
}

@property (nonatomic, retain) NSString *expandedName;
@property (nonatomic, retain) NSString *expandedNameSpace;
@property (nonatomic, retain) NSSet *propertiesToFind;

- (void).cxx_destruct;
- (id)expandedName;
- (id)expandedNameSpace;
- (id)initWithPropertiesToFind:(id)arg1 expandedName:(id)arg2 expandedNameSpace:(id)arg3;
- (id)propertiesToFind;
- (void)setExpandedName:(id)arg1;
- (void)setExpandedNameSpace:(id)arg1;
- (void)setPropertiesToFind:(id)arg1;

@end
