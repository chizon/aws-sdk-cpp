/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/codedeploy/codedeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace codedeploy
{
namespace Model
{

  /*
    <p>Represents the input of a stop deployment operation.</p>
  */
  class AWS_CODEDEPLOY_API StopDeploymentRequest : public codedeployRequest
  {
  public:
    StopDeploymentRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>The unique ID of a deployment.</p>
    */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    /*
     <p>The unique ID of a deployment.</p>
    */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentId = value; }

    /*
     <p>The unique ID of a deployment.</p>
    */
    inline void SetDeploymentId(const char* value) { m_deploymentId.assign(value); }

    /*
     <p>The unique ID of a deployment.</p>
    */
    inline StopDeploymentRequest&  WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /*
     <p>The unique ID of a deployment.</p>
    */
    inline StopDeploymentRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}

  private:
    Aws::String m_deploymentId;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws