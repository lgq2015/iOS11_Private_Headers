/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPropPatchTask : CoreDAVActionBackedTask {
    int  _absoluteOrder;
    NSURL * _priorOrderedURL;
    NSSet * _propPatchRemoveElements;
    NSSet * _propPatchSetElements;
    CoreDAVResponseItem * _responseItem;
    bool  _sendOrder;
}

@property (nonatomic) int absoluteOrder;
@property (nonatomic) <CoreDAVPropPatchTaskDelegate> *delegate;
@property (nonatomic, retain) NSURL *priorOrderedURL;
@property (nonatomic, retain) NSSet *propPatchRemoveElements;
@property (nonatomic, retain) NSSet *propPatchSetElements;
@property (nonatomic, retain) CoreDAVResponseItem *responseItem;

- (void).cxx_destruct;
- (int)absoluteOrder;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithPropertiesToSet:(id)arg1 andRemove:(id)arg2 atURL:(id)arg3;
- (id)initWithURL:(id)arg1;
- (id)priorOrderedURL;
- (id)propPatchRemoveElements;
- (id)propPatchSetElements;
- (id)requestBody;
- (id)responseItem;
- (void)setAbsoluteOrder:(int)arg1;
- (void)setPriorOrderedURL:(id)arg1;
- (void)setPropPatchRemoveElements:(id)arg1;
- (void)setPropPatchSetElements:(id)arg1;
- (void)setResponseItem:(id)arg1;

@end
