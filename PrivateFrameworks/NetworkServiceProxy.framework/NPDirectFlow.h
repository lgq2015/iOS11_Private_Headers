/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPDirectFlow : NSObject <NSPConnectionInfoSource> {
    NSPConnectionInfo * _connectionInfo;
    NSDate * _connectionStartDate;
    NSDate * _firstTxByteTimestamp;
    NSNumber * _identifier;
    struct nw_protocol { 
        unsigned char flow_id[16]; 
        struct nw_protocol_identifier {} *identifier; 
        struct nw_protocol_callbacks {} *callbacks; 
        struct nw_protocol {} *output_handler; 
        void *handle; 
        struct nw_protocol {} *default_input_handler; 
        void *output_handler_context; 
    }  _protocol;
    NSDate * _startDate;
}

@property (retain) NSPConnectionInfo *connectionInfo;
@property (retain) NSDate *connectionStartDate;
@property (retain) NSDate *firstTxByteTimestamp;
@property (readonly) NSNumber *identifier;
@property (readonly) struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*protocol;
@property (readonly) NSDate *startDate;

+ (void)initializeProtocol;

- (void).cxx_destruct;
- (id)connectionInfo;
- (id)connectionStartDate;
- (void)copyConnectionInfoWithCompletionHandler:(id /* block */)arg1;
- (void)createConnectionInfo;
- (id)firstTxByteTimestamp;
- (void)handleDetachedFromProtocol;
- (id)identifier;
- (id)initWithParameters:(id)arg1;
- (struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)protocol;
- (void)setConnectionInfo:(id)arg1;
- (void)setConnectionStartDate:(id)arg1;
- (void)setFirstTxByteTimestamp:(id)arg1;
- (id)startDate;

@end
